// Complete the decentNumber function below.
void decentNumber(int n) {
        int z = n; 
        if(z % 3 == 0) {
            cout << string(z, '5') << endl;
        }
        while(z % 3 != 0) {
            z -= 5;
            if(z < 0) {
                cout<< "-1" << endl;
                break;
            } else {
                if(z % 3 == 0)
                    cout << string(z, '5') << string((n - z), '3') << endl;
            }
        }       
    


}
