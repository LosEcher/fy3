// Room: /d/zhongzhou/wroad1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�˴��Ǹ���·��������Զ�ǿ��⣬�����ɵ����ݣ�����ͨ��������
ɽ����ʱ��������ʱ�ڣ���������˳������·����ɽ��ȥ��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northwest":"/d/hengshan/tohs",
  "west":"/d/kaifeng/tokaifeng",
  "east":__DIR__"wroad2",
]));
	set("outdoors", "zhongzhou");
	set("objects",([
		"/npc/man5":1,
		"npc/man4":2,
	]));

	setup();
	replace_program(ROOM);
}
