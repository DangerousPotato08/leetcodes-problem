class Solution {
public:
    string intToRoman(int num) {    
        int value = num;
        string result ; 
        if(value / 1000 != 0){
            for(int i = 0 ; i < value / 1000;i++){    
                result = result + "M";
            }
            value = value % 1000;
        }
        if(value/500!=0){
            if(value>=900 && value<=999){
                result = result + "CM";
                value %=900;
            }
            else{
                for(int i = 0 ; i < value / 500 ; i ++){
                    result = result + "D";
                }
                value = value % 500;
            }
        }
        if(value /100 !=0){
            if(value >=400 && value <= 499){
                value = value % 400;
                result = result + "CD";
            }
            else{
                for(int i = 0 ; i < value /100;i++){
                    result = result + 'C';
                }
                value = value % 100; 
            }
        }

        if(value / 50 !=0){
            if(value >= 90 && value < 100){
                value = value % 90;
                result = result + "XC";
            }
            else{
                for(int i = 0 ; i < value / 50;i++){
                    result = result + 'L';
                }
                value %= 50;
            }
        }
        if(value / 10 != 0){
            if(value >= 40 && value < 50){
                value = value % 40;
                result = result + "XL";
            }
            else{
                for(int i = 0 ; i < value / 10;i++){
                    result = result + 'X';
                }
                value = value % 10;
            }
        }
        if(value / 5 != 0){
            if(value == 9){
                value %= 9;
                result = result + "IX";
            }
            else{
                for(int i = 0; i < value / 5 ; i++){
                    result = result + "V";
                }
                value %= 5;
            }
        }
        if(value / 1 != 0){
            if(value == 4){
                result = result + "IV";
                value %=4 ;
            }
            else{
                for(int i = 0 ; i<value / 1 ; i++){
                    result = result + 'I';
                }
                value = value % 1;
            }
        }
        return result ; 
    }
        
};