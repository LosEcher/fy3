inherit ITEM;
int top_cmd();

void create()
{
        set_name("xxxx", ({"book"}));
        }


void init()
{
    add_action("top_cmd","top");
} 

int top_cmd(string arg)
{
        object who = this_player();

        string str,*astr;
        int i;
//      seteuid(geteuid(me));
        if (!arg||arg=="")
                return notify_fail("ָ���ʽ : topten <����>\n");
        str=TOP_D->topten_query(arg);
        write(str+"\n");
        return 1;
}
