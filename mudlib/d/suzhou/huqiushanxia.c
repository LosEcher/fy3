// Room: /d/suzhou/huqiushanxia.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
����ɽ�������е�һ��ʤ֮�ƣ�����������ʮ�˾�֮ʤ����ʫ���ն�������
̾Ի�������ݶ����λ��𼰺���Ҳ�����Ĵ�������һ�£����������羰���ˣ�ȷ
������ĺõط�������������˿��������������˽����ϵĶ���ԹԹ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "southeast" : __DIR__"xiaolu1",
		"northup" :__DIR__"huqiushanyao",
]));
	set("objects",([
		__DIR__"npc/tiaofu":2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
