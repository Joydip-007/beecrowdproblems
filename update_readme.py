from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
from bs4 import BeautifulSoup
import time
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

def fetch_title(problem_number):
    url = f'https://judge.beecrowd.com/en/problems/view/{problem_number}'
    print(f"🌐 Fetching: {url}")

    options = webdriver.ChromeOptions()
    # Toggle headless mode easily for debugging
    HEADLESS = False
    if HEADLESS:
        options.add_argument('--headless')
    options.add_argument('--no-sandbox')
    options.add_argument('--disable-dev-shm-usage')
    options.add_argument("user-agent=Mozilla/5.0 (Windows NT 10.0; Win64; x64)")

    print("🚀 Launching browser...")
    driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()), options=options)
    print("✅ Browser launched.")

    try:
        driver.get(url)
        print("⌛ Waiting for page to load...")

        try:
            WebDriverWait(driver, 10).until(
                EC.presence_of_element_located((By.TAG_NAME, "h1"))
            )
        except:
            print("⏰ Timeout waiting for the title element.")
            return None

        soup = BeautifulSoup(driver.page_source, 'html.parser')
        title_tag = soup.find("h1")
        if title_tag:
            print(f"✅ Found title: {title_tag.text.strip()}")
            return title_tag.text.strip()
        else:
            print("⚠️ Title tag not found in page source")
            return None
    except Exception as e:
        print(f"❌ Exception occurred: {e}")
        return None
    finally:
        driver.quit()
        print("🛑 Browser closed.")