#include <ansi.h>;

inherit ROOM;

void create()
{
            set("short", YEL"С����"NOR);
	set("long", @LONG
����һ��СС��������ӭ����һ���������ܵĴ�¯��
һ����ϵѩ�׶Ƕ�������������¯�Ծ��ĵ�����������
LONG
	);
	set("no_clean_up", 0);
	set("valid_startroom", 1);
	set("exits", ([ /* sizeof() == 5 */
  "down" : "/d/zhongzhou/shizhongxin",
     "up" : "/d/wiz/meeting",
]));
       set("outdoors",1);
setup();
}
void init()
{
           add_action("do_full", "full_me");
}
   int do_full(string arg)
{
        object me;
        me = this_player();
        if( me->query("water") >= me->max_water_capacity() )
                return notify_fail("���Ѿ���Ҳ�Ȳ���һ��ˮ�ˡ�\n");
        if( me->query("food") >= me->max_food_capacity() )
                return notify_fail("���Ѿ���Ҳ�Բ����κζ����ˡ�\n");
           message_vision("$N���ڻ�¯�ԣ�"+HIW+HBYEL+"��Դ��"+NOR+"һ�� ... \n", me);
        me->set("water", me->max_water_capacity());
           me->set("food", me->max_food_capacity());
        message_vision("$Nˮ�㷹��,���Ķ�Ƥ,վ������ ... \n", me);
        return 1;
}




