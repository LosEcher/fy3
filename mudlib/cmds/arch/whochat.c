inherit F_CLEAN_UP;
int main(object me, string msg)
{
    int i;
    string str;
    object *list=users();;
for (i=0;i<sizeof(list);i++)  {
    str=list[i]->query_temp("last_channel_msg");
    write(list[i]->query("name")+"��:"+str+"\n");
 }
    return 1;
}
