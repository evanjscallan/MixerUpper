#include <iostream>
#include "../include/mylibrary/myheader.h"
#include <curl/curl.h>

using namespace std;

int main()
{
    curl_global_init(CURL_GLOBAL_ALL);

    // Create a libcurl easy handle
    CURL *curl = curl_easy_init();

    if (curl)
    {
        // Set URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.randomuser.me/api");

        // Perform the request
        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK)
        {
            cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }

        // Clean up
        curl_easy_cleanup(curl);
    }
    // Cleanup libcurl
    curl_global_cleanup();
    return 0;
}
