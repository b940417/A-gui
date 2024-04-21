#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ZipCode {
public:
    string encodeDigit(int digit) const;
    int decodeDigit(const string& group) const;

    ZipCode(int code);
    ZipCode(const std::string& barcode);

    int getZipCode() const;
    string getBarcode() const;
private:
    vector<int> zipcode;
};

int main() {
    ZipCode zip1(99504);                                           //Test the ZipCode class
    cout << "Original Zip Code: " << zip1.getZipCode() << endl;
    cout << "Barcode Format: " << zip1.getBarcode() << endl;

    ZipCode zip2("110100101000101011000010011");
    cout << "Decoded Zip Code: " << zip2.getZipCode() << endl;
    cout << "Original Barcode: " << zip2.getBarcode() << endl;

    system("pause");
    return 0;
}

string ZipCode::encodeDigit(int digit) const {            //function to encode a single digit into barcode format
    const vector<int> values = { 7, 4, 2, 1, 0 };
    string barcode;
    for (size_t i = 0; i < values.size(); ++i) {
        if (digit >= values[i]) {
            barcode += '1';
            digit -= values[i];
        }
        else {
            barcode += '0';
        }
    }
    return barcode;
}

int ZipCode::decodeDigit(const string& group) const {     //Function to decode a single barcode group into a digit
    const vector<int> values = { 7, 4, 2, 1, 0 };
    int digit = 0;
    for (size_t i = 0; i < group.size(); ++i) {
        if (group[i] == '1') {
            digit += values[i];
        }
    }
    return digit;
}

ZipCode::ZipCode(int code) {                      //Constructor taking an integer zip code
    while (code > 0) {
        zipcode.insert(zipcode.begin(), code % 10);
        code /= 10;
    }
}

ZipCode::ZipCode(const string& barcode) {         //Constructor taking a barcode string
    for (size_t i = 1; i < barcode.size() - 1; i += 5) {
        string group = barcode.substr(i, 5);
        zipcode.push_back(decodeDigit(group));
    }
}

int ZipCode::getZipCode() const {                 //Function to return zip code as an integer
    int code = 0;
    for (int digit : zipcode) {
        code = code * 10 + digit;
    }
    return code;
}

string ZipCode::getBarcode() const {              //Function to return zip code in barcode format as a string
    string barcode = "1";
    for (int digit : zipcode) {
        barcode += encodeDigit(digit);
    }
    barcode += "1";
    return barcode;
}