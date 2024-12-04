#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
 
    // Define the learning resources
    map<string, vector<string> > learningResources;

    // Populate learning resources
    vector<string> literacy;
    literacy.push_back("Digital Skills for All: Basics");
    literacy.push_back("Free Google Digital Garage courses");

    vector<string> dataEntry;
    dataEntry.push_back("Data Entry Mastery by Coursera");
    dataEntry.push_back("Basic Excel by EdX");

    vector<string> coding;
    coding.push_back("Python for Beginners on W3Schools");
    coding.push_back("FreeCodeCamp HTML & CSS tutorials");

    vector<string> marketing;
    marketing.push_back("Digital Marketing Basics by HubSpot");
    marketing.push_back("SEO Crash Course by Neil Patel");

    vector<string> softSkills;
    softSkills.push_back("Effective Communication by Udemy");
    softSkills.push_back("Leadership Skills by LinkedIn Learning");

    learningResources["Digital Literacy"] = literacy;
    learningResources["Data Entry"] = dataEntry;
    learningResources["Coding Basics"] = coding;
    learningResources["Digital Marketing"] = marketing;
    learningResources["Soft Skills"] = softSkills;

    // Define questions for the survey
    vector<string> questions;
    questions.push_back("Are you comfortable using computers and the internet? (yes/no)");
    questions.push_back("Do you know how to work with spreadsheets like Excel? (yes/no)");
    questions.push_back("Have you ever coded before? (yes/no)");
    questions.push_back("Are you familiar with digital marketing concepts like SEO and social media ads? (yes/no)");
    questions.push_back("Do you think you need help with communication or leadership skills? (yes/no)");

    // Get user responses
    vector<string> responses;
    cout << "Answer the following questions (yes/no):\n";
    for (size_t i = 0; i < questions.size(); ++i) {
        cout << questions[i] << endl;
        string response;
        cin >> response;
        responses.push_back(response);
    }

    // Suggest skills based on responses
    vector<string> skillSuggestions;
    if (responses[0] == "no") skillSuggestions.push_back("Digital Literacy");
    if (responses[1] == "no") skillSuggestions.push_back("Data Entry");
    if (responses[2] == "no") skillSuggestions.push_back("Coding Basics");
    if (responses[3] == "no") skillSuggestions.push_back("Digital Marketing");
    if (responses[4] == "yes") skillSuggestions.push_back("Soft Skills");

    // Display suggestions
    if (!skillSuggestions.empty()) {
        cout << "\nBased on your responses, we recommend improving the following skills:\n";
        for (size_t i = 0; i < skillSuggestions.size(); ++i) {
            cout << "- " << skillSuggestions[i] << endl;

            // Provide learning resources for each skill
            cout << "  Recommended resources:\n";
            vector<string> resources = learningResources[skillSuggestions[i]];
            for (size_t j = 0; j < resources.size(); ++j) {
                cout << "    - " << resources[j] << endl;
            }
        }
    } else {
        cout << "\nGreat! You seem to be well-equipped with the necessary skills." << endl;
    }

    return 0;
}
