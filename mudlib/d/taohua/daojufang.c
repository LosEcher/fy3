inherit ROOM;

void create()
{
        set("short", "���߷�");
        set("long", @LONG
����һ����߷�������һЩ�һ������ǳ��õĶ�������������
�����ģ���������һ�Ű߲�������һ�ѿ����Σ����ǰ��컹����С��
�ơ����Ϳ������������ʹ�������㣬��Ȼ�ڲ����ԣ����㻹������
�㷡�
LONG );
        set("exits", ([
                "west" : __DIR__"dating",
                "up"   : __DIR__"shufang",
        ]));

        setup();
        replace_program(ROOM);
}
int valid_leave(object me, string dir)
{
        mapping myfam;
        myfam = (mapping)me->query("family");

        if ((!myfam || myfam["family_name"] != "�һ���") && dir == "up")
           return notify_fail("�˴����һ������أ���ֹ����\n");

        return ::valid_leave(me, dir);
}

