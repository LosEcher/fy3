// Room: /d/suzhou/meizhuang/shuifang.c

inherit ROOM;

void create()
{
	set("short", "˯��");
	set("long", @LONG
�����÷ׯ������Ϣ�ĵط������󲻽Ӵ��������ɡ������ڳ��˼���
�󴲿���˯��֮�⣬ֻ�и���ð���̵���¯�����ܵĴ������ѱ�������ס��
��ס�˹��ߡ���һ���������ֻ����˯�ĸо���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"shibanlu2",
]));
	set("objects",([
	__DIR__"npc/xiaotong":1,
]));
	set("sleep_room",1);
	set("no_clean_up", 0);
	set("no_fight",1);
	setup();
	replace_program(ROOM);
}
