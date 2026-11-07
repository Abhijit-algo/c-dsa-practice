
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_URL_LEN 256
#define MAX_HISTORY 100

typedef struct {
    char history[MAX_HISTORY][MAX_URL_LEN];
    int current_index;
    int size;
} BrowserHistory;

BrowserHistory* browserHistoryCreate(const char* homepage) {
    BrowserHistory* obj = (BrowserHistory*)malloc(sizeof(BrowserHistory));
    strcpy(obj->history[0], homepage);
    obj->current_index = 0;
    obj->size = 1;
    return obj;
}

void browserHistoryVisit(BrowserHistory* obj, const char* url) {
    obj->current_index++;
    strcpy(obj->history[obj->current_index], url);
    obj->size = obj->current_index + 1;
}

const char* browserHistoryBack(BrowserHistory* obj, int steps) {
    obj->current_index -= steps;
    if (obj->current_index < 0) {
        obj->current_index = 0;
    }
    return obj->history[obj->current_index];
}

const char* browserHistoryForward(BrowserHistory* obj, int steps) {
    obj->current_index += steps;
    if (obj->current_index >= obj->size) {
        obj->current_index = obj->size - 1;
    }
    return obj->history[obj->current_index];
}


void browserHistoryFree(BrowserHistory* obj) {
    free(obj);
}

int main() {
    BrowserHistory* browser = browserHistoryCreate("gfg.org");
    
    browserHistoryVisit(browser, "google.com");
    browserHistoryVisit(browser, "facebook.com");
    browserHistoryVisit(browser, "youtube.com");
    
    printf("Back 1: %s\n", browserHistoryBack(browser, 1));       
    printf("Back 1: %s\n", browserHistoryBack(browser, 1));       
    printf("Forward 1: %s\n", browserHistoryForward(browser, 1)); 
    
    browserHistoryVisit(browser, "linkedin.com");                 
    printf("Forward 2 (should be linkedin.com): %s\n", browserHistoryForward(browser, 2));
    
    browserHistoryFree(browser);
    return 0;
}