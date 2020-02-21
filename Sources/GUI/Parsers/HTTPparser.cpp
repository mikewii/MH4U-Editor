#include "HTTPparser.h"

#include <stdio.h>
//#include <curl/curl.h>
#include <random>

using myEngine = std::default_random_engine;
using myDist = std::uniform_int_distribution<>;

myEngine re{};
myDist oneToSix{1,6};
auto die = [](){ return oneToSix(re);};

#define SKIP_PEER_VERIFICATION
#define SKIP_HOSTNAME_VERIFICATION 

HTTPparser::HTTPparser( wxWindow* parent )
:
HTTP( parent )
{

}

void HTTPparser::OnGetToken( wxCommandEvent& event )
{
    wxString reply = wxHTTP_POST("google.com", "/search", "q=carrots");
    m_scintilla2->AppendText(reply);
}

const wxString HTTPparser::wxHTTP_POST(const wxString& host, const wxString& path, const wxString& data)
{
	//CURL *curl;
	//CURLcode res;
	//
    ///* In windows, this will init the winsock stuff */
    //curl_global_init(CURL_GLOBAL_ALL);
	//
    ///* get a curl handle */
    //curl = curl_easy_init();
    //if (curl) {
    //    /* First set the URL that is about to receive our POST. This URL can
    //       just as well be a https:// URL if that is what should receive the
    //       data. */
	//    curl_easy_setopt(curl, CURLOPT_URL, "https://www.googleapis.com/upload/drive/v3/files");
    //    /* Now specify the POST data */
    //    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "q=carrots");
	//    
	//    /* Header */
	//    
	//    struct curl_slist *hs = NULL;
	//    //hs = curl_slist_append(hs, "Host: www.googleapis.com");
	//    hs = curl_slist_append(hs, "User-Agent: HTTP/1.1");
	//    //hs = curl_slist_append(hs, "Content-Type: application/x-www-form-urlencoded");
	//    hs = curl_slist_append(hs, "Authorization: Bearer ya29.ImCiB7Z3YmQ75jOs3Aqo7CJJ1upPHidElVBuQ1AitNb0efEddhrAFbB_8Uqy89-SL3q2fzNbgTlfBqyyNKi1tvWb_rXs_UEkmIt4C5whyNvQB5LP7IXqmCDzTYbQsSdHAek");
	//    
	//    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);
	//	
	//    
	//	#ifdef SKIP_PEER_VERIFICATION
	//			/*
	//			 * If you want to connect to a site who isn't using a certificate that is
	//			 * signed by one of the certs in the CA bundle you have, you can skip the
	//			 * verification of the server's certificate. This makes the connection
	//			 * A LOT LESS SECURE.
	//			 *
	//			 * If you have a CA cert for the server stored someplace else than in the
	//			 * default bundle, then the CURLOPT_CAPATH option might come handy for
	//			 * you.
	//			 */ 
	//			curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
	//	#endif
 	//
	//	#ifdef SKIP_HOSTNAME_VERIFICATION
	//			/*
	//			 * If the site you're connecting to uses a different host name that what
	//			 * they have mentioned in their server certificate's commonName (or
	//			 * subjectAltName) fields, libcurl will refuse to connect. You can skip
	//			 * this check, but this will make the connection less secure.
	//			 */ 
	//			curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
	//	#endif
	//	
	//    
	//    
    //    /* Perform the request, res will get the return code */
    //    res = curl_easy_perform(curl);
	//
    //    /* Check for errors */
    //    //if (res != CURLE_OK)
    //    m_scintilla2->AppendText(curl_easy_strerror(res));
	//    
	//    /* Obtain and show response code */
	//    long resCode;
	//    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &resCode);
	//    wxString response;
	//    response << resCode;
	//    m_textCtrlResponse->SetValue(response);
	//
    //    /* always cleanup */
    //    curl_easy_cleanup(curl);
    //}
    //curl_global_cleanup(); 
	wxString str;
	int x = die();
	str << x;
    return str; 
}