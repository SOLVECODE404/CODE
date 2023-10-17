if(num==0)return 0;
if(num%2==0)return 1+go(num/2);
return 1+go(num-1);

return go(num);