// wizinfo.c

inherit F_CLEAN_UP;

int help(object me);

int main(object me, string arg)
{
        string str;
        int i;
        object *inv, ob;
        object obj;

        if (!arg) return help(me);
        if( wizardp(me) && arg ) {
                ob = find_player(arg);
                if( !ob ) ob = find_living(arg);
                if( !ob ) ob = present(arg, environment(me));
        }


     if(!ob) {
                        return notify_fail("û�������ҡ������ط���\n");
                }

        seteuid(geteuid(me));

        inv = all_inventory(ob);
        if( !sizeof(inv) ) {
                write((ob==me)? "Ŀǰ������û���κζ�����\n"
                        : ob->name() + "����û��Я���κζ�����\n");
                return 1;
        }

       for(i=0;i<sizeof(inv);i++){
        obj=inv[i];
        printf("\n-----------------------------------------------------\n");
        write("������\t\t" + base_name(obj) + ".c\n");
//      write("����\t\t" + domain_file(base_name(obj)) + "\n");
//      write("���ߣ�\t\t" + author_file(base_name(obj)) + "\n");
//      write("Ȩ�ޣ�\t\tuid = " + getuid(obj) + ", euid = " + geteuid(obj) + "\n");
//      write("�ȼ���\t\t" + wizhood(obj) + "\n");
//      write("ʹ�ü����壺\t" + memory_info(obj) + "\n");
        str = "";
        if( living(obj) )               str += "���� ";
        if( userp(obj) )                str += "ʹ���� ";
        if( interactive(obj) )  str += "���� ";
        if( wizardp(obj) )              str += "��ʦ ";
        if( clonep(obj) )               str += "���� ";
        if( virtualp(obj) )     str += "���� ";
        if( query_heart_beat(obj) ) str += "����:" + query_heart_beat(obj) + " ";
//      write("���ԣ�\t\t" + str + "\n");
//      write("���Ƹ�����\t" + sizeof(children(base_name(obj)+".c")) + "\n");
//      write("�ο����᣺\t" + refs(obj) + "\n");
        write("���֣�\t" + obj->short() + "\n");

       }

        return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : wizinfo <�����>

���ô�һָ��ɵ�֪һЩ�йظ��������Ѷ��
HELP
    );
    return 1;
}
