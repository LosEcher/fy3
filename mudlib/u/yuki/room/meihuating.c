// Room: /u/yuki/room/meihuating.c

inherit ROOM;

void create()
{
        set("short", "÷��ͤ");
        set("long", @LONG
�����������������÷��ͤ��ͤ�Ӻ�С��ȴ�ܾ��£����˺�
��������÷ׯ���Ȼ��������һ����������˶�������÷��ʢ
��������һ������ͤ����Χ�����涼����ɨ�ĸɸɾ�������λ
ׯ��ʱ��������̸��˵�ء�ͤ�Ӷ����������������⡣
LONG
        );
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 1 */
  "southwest" : __DIR__"baiqiao",
]));

        setup();
}

void init()
{
          add_action("do_pa","pa");
}

int do_pa(string arg)
{
        object ob,me = this_player();

        if(arg != "ͤ��")
                return notify_fail("��Ҫ��ʲô��\n");

        ob = find_object(__DIR__"shangfang");
        if(!ob)
                ob = load_object(__DIR__"shangfang");
        if(!ob)
                return notify_fail("��Ҫ��ʲô��\n");

        write("����ͤ������ȥ��\n");
        if(me->move(ob))
                 tell_room(ob,me->name()+"����������������\n",({me}));
        return 1;
}
