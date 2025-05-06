import os
import requests
from bs4 import BeautifulSoup

# Path to your C directory
C_DIRECTORY = 'C'  # Make sure to set this path if it's different

# URL pattern for BeeCrowd problem pages
BEE_CROWD_URL = 'https://www.beecrowd.com.br/judge/en/problems/view/'

# Function to fetch the problem title from BeeCrowd
def fetch_title(problem_number):
    url = f'{BEE_CROWD_URL}{problem_number}'
    response = requests.get(url)
    
    if response.status_code != 200:
        return None
    
    # Parse the HTML content
    soup = BeautifulSoup(response.text, 'html.parser')
    
    # Find the problem title by inspecting the HTML structure
    title_tag = soup.find('h1', {'class': 'problem-title'})
    
    if title_tag:
        return title_tag.text.strip()
    else:
        return None

# Function to generate the table row for each problem
def generate_problem_table():
    problem_list = []

    # Loop through all files in the C directory
    for filename in os.listdir(C_DIRECTORY):
        if filename.endswith('.c'):
            # Extract problem number from filename (assuming format is "1001.c")
            problem_number = filename.split('.')[0]
            
            # Fetch the problem title from BeeCrowd
            title = fetch_title(problem_number)
            if title:
                problem_list.append((problem_number, title, f"[{problem_number}.c](C/{filename})"))
    
    return problem_list

# Function to update the README file with the problem table
def update_readme(problem_list):
    # Open and read the current README
    with open('README.md', 'r', encoding='utf-8') as file:
        readme_content = file.read()
    
    # Find the position where the problem list should be inserted
    table_start = readme_content.find('## ✅ Solved Problems')
    table_end = readme_content.find('---', table_start)
    
    # Create the table content for solved problems
    table_content = '| Problem No. | Title                | Solution File             |\n'
    table_content += '|-------------|----------------------|---------------------------|\n'
    
    for problem_number, title, file_link in problem_list:
        table_content += f'| {problem_number}        | {title}      | {file_link}        |\n'

    # Replace the old problem table with the new one
    updated_readme = readme_content[:table_start] + table_content + readme_content[table_end:]

    # Write the updated content back to README.md
    with open('README.md', 'w', encoding='utf-8') as file:
        file.write(updated_readme)
    print("README.md has been updated successfully!")

# Main script to run everything
if __name__ == "__main__":
    # Generate problem table
    problem_list = generate_problem_table()
    
    # Update the README file
    if problem_list:
        update_readme(problem_list)
    else:
        print("No problems found to update in the README.")