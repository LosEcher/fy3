//room: /d/mingjiao/qiandian.c
inherit ROOM;
void init();
void create()
{
        set("short","����ǰ��");
        set("long", @LONG
����������ǰ�ͨ�����̵����ı��ǰ������Ű�յ����
�������Ǿ�׳�彣��ʿ����ɭ�ϱ��ˡ�ʹ�˲�ս������ǰ���ڷ�����
ľ�Ρ��������ˡ������������׷�ң���˶������Ǳ��ơ���ң���ɡ�
�Ĺ�������ʹ�ߡ���������������һ�ʺ�֮·��
LONG
           );
        set("exits",([
            "north" : "d/mingjiao/dadian.c",
	"south":__DIR__"tianweitang",
           ]));
        set_temp("tieling",8);
        set("objects",([
                      __DIR__"npc/yangxiao":1,
                        __DIR__"npc/fanyao":1,
                        ]));
        setup();
}

int valid_leave(object me,string dir)
{
	string bh;
	object npc1,npc2;

	bh=(string)me->query("banghui");
	npc1=present("yang xiao",this_object());
	npc2=present("fan yao",this_object());

	if( bh && bh!="����" && dir=="north" && objectp(npc1))
	return notify_fail("���а��׵����Ǳ����ֵܲ������ڣ�\n");
	if( bh && bh!="����" && dir=="north" && objectp(npc2))
	return notify_fail("��ң����ֻ�б��̵��Ӳ��ܰݼ������Ž�����\n");
	return ::valid_leave(me,dir);
}

