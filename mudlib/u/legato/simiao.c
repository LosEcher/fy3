inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����һ�����ӵ�С��������һ��������������������������֮��
�����ǽ�ͯ��Ů����ǰ�Ĺ�̨����������Ů����������Ʒ��һ��
СǩͲ��ÿ�춼�кܶ�����������ǩ���㣬��̨��һ��С�䣬װ����
����Ľ���
LONG);
   
   set("qiantong", 1);
   set("no_fight",1);
   set("no_sleep_room",1);

   
   set("exits", ([ /* sizeof() == 1 */
 "east" : "/d/yandang/jiedao",
]));
        set("objects", ([
            "/u/legato/npc/daoshi" : 1,
            "/d/yandang/obj/gongdexiang" : 1,
]));
  setup();
}
void init()
{
        add_action("do_get", "get");
}

int do_get(string arg)
{
    object me,ob1;
    me=this_player();

    if ( (arg!="qiantong")&&(arg!="ǩͲ")) return 0;
if (!query("qiantong")) return notify_fail("ǩͲ�Ѿ�����ȡ����!\n");
if((me->query("family/family_name")=="�㵴��")&&(query("qiantong")))
    {message_vision(
"$N�ӹ�����ȡ��һ��ǩͲ��\n", me);
                ob1=clone_object("/d/yandang/obj/qiantong.c");
                         ob1->move(me);
        set("qiantong",0);
        return 1;
}
return 0;
}

