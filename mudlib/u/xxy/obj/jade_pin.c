#include <ansi.h>
inherit ITEM;
inherit __DIR__"vacuous.c";

void create()
{      object ob;
        set_name("����Сƿ", ({ "pin", "bottle", "xiaopin"}) );
        set_weight(500);
        set_max_encumbrance(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "һ���������Ƶ�ƿ��,����ĸ�������"+RED+"�����"+NOR+"���ɵġ�\n");
                set("value",1000);
        }
                ob=new("/u/aug/jiuhua.c");
                             ob->move(this_object());
        set("vacuous",([
                      "status":1,
                      "name":RED"���ƿ��"NOR,
            ]));
}
int is_container() { return 1; }
