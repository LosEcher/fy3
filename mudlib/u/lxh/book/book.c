inherit ITEM;
inherit F_CLEAN_UP;
int top_cmd();

void create()
{
        set_name("xxxx", ({"book"}));
        set_weight(1000);
                set("unit", "��");
     set("value", 100);
   set("long",
"һ��������С���ӣ�������\n");
        set("material", "paper");
        }


void init()
{
    add_action("top_cmd","top");
} 

int top_cmd(object me, string arg)
{
        string str,*astr;
        int i;
        seteuid(geteuid(me));
        if (!arg||arg=="")
                return notify_fail("ָ���ʽ : topten <����>\n");
        str=TOP_D->topten_query(arg);
        write(str+"\n");
        return 1;
}
