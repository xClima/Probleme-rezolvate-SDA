#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>



using namespace std;
struct votant {
    string nume_complet;
    string adresa;
    string CNP;
    string serie;

};
struct out{
    string nume;
    double voturi;
    int rank;
};
bool sortbysec(out a,out b) {

    if(a.voturi!=b.voturi){
        return a.voturi>b.voturi;
    }else{
        return a.rank<b.rank;
    }


}

int main() {
    double frauda = 0, suma_voturi = 0;
    string nume_candidat;
    string CNP_in;
    int verificare = 0;
    string nume_complet;
    string adresa;
    string CNP;
    string serie;
    int an_curent=2018,luna_curenta=5,an,luna;
    string cnp_an,cnp_luna;
    vector<votant> vec;
    ifstream in;
    int index=0;

    in.open("evidenta.csv");

    while (getline(in, nume_complet, ',')) {
        //cout << nume_complet << ' ';
        getline(in, adresa, ',');
        //cout << adresa << ' ';
        getline(in, CNP, ',');
        //cout << CNP << ' ';
        getline(in, serie);
        //cout << serie << ' ' << endl;
        vec.push_back({nume_complet, adresa, CNP, serie});
    }

    //in.close();

    vector<pair<string, double>> cand;
    vector<out>qqq;
    vector<string> cnpuri;

    char input;

    while (cin >> input) {

        if (input == '+') {
            double verif = 0;
            verificare = 0;
            string junk;
            getline(cin,junk,' ');
            getline(cin,CNP_in,' ');
            //cin>>junk;
            getline(cin, nume_candidat);




                for (int i = 0; i < vec.size(); i++) {
                    if (CNP_in == vec[i].CNP) {
                        verif = 0;
                        break;
                    } else { verif = 2; }
                }

            if (verif == 2) {
                cout << "CNP invalid" << endl;
                frauda++;
            }else {


                if (CNP_in[0] == '1' || CNP_in[0] == '2') {
                    cnp_an = "19";
                    cnp_an += CNP_in[1];
                    cnp_an += CNP_in[2];
                    if (CNP_in[3] != 0) {
                        cnp_luna = CNP_in[3];
                        cnp_luna += +CNP_in[4];
                    } else {
                        cnp_luna = CNP_in[4];
                    }
                    an = stoi(cnp_an);
                    luna = stoi(cnp_luna);
                } else {
                    cnp_an = "20";
                    cnp_an += CNP_in[1];
                    cnp_an += CNP_in[2];

                    if (CNP_in[3] != 0) {
                        cnp_luna = CNP_in[3];
                        cnp_luna += +CNP_in[4];
                    } else {
                        cnp_luna = CNP_in[4];
                    }
                    an = stoi(cnp_an);
                    luna = stoi(cnp_luna);
                }


                if (an_curent - an < 18) {
                    cout << "Persoana minora" << endl;
                    verif = 5;
                }
                if (an_curent - an == 18) {
                    if (luna_curenta - luna < 0) {
                        cout << "Persoana minora" << endl;
                        verif = 5;
                    }
                }

                if (verif != 5) {
                    for (int i = 0; i < cnpuri.size(); i++) {
                        if (CNP_in == cnpuri[i]) {
                            cout << "Vot deja inregistrat" << endl;
                            frauda++;
                            verif = 1;
                            break;
                        }
                    }


                    if (verif == 0) {

                        cnpuri.push_back(CNP_in);
                        if (qqq.size() > 0) {

                            for (int i = 0; i < qqq.size(); i++) {
                                verificare = 0;
                                if (nume_candidat == qqq[i].nume) {
                                    qqq[i].voturi++;
                                    suma_voturi++;
                                    verificare = 1;
                                    break;
                                }


                            }
                            if (verificare == 0) {
                                qqq.push_back({nume_candidat, 1, index});
                                suma_voturi++;
                            }

                        } else {
                            qqq.push_back({nume_candidat, 1, index});
                            suma_voturi++;
                        }
                        index++;

                    }
                    nume_candidat.clear();
                    CNP_in.clear();
                }
            }
        }
        if (input == '?') {
            sort(qqq.begin(), qqq.end(), sortbysec);
            cout << "Statistici" << endl;
            cout << "==========" << endl;
            for (int i = 0; i < qqq.size(); i++) {
                cout << qqq[i].nume << ':' << ' ' << fixed << setprecision(0) << qqq[i].voturi << " voturi ("
                     << fixed << setprecision(2) << (qqq[i].voturi / suma_voturi) * 100 << "%)" << endl;
            }
            cout << "Incercari de frauda: " << fixed << setprecision(0) << frauda << endl;
        }

        if (input == '*') {
           sort(qqq.begin(), qqq.end(), sortbysec);
            cout << "Statistici" << endl;
            cout << "==========" << endl;
            for (int i = 0; i < qqq.size(); i++) {
                cout << qqq[i].nume << ':' << ' ' << fixed << setprecision(0) << qqq[i].voturi << " voturi ("
                     << fixed << setprecision(2) << (qqq[i].voturi / suma_voturi) * 100 << "%)" << endl;
            }
            cout << "Incercari de frauda: " << fixed << setprecision(0) << frauda << endl;
            return 0;
        }

    }
}






