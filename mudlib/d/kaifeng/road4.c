// Room: /d/kaifeng/road4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����߸ߵ�����ͬ�ʺ�����˼䣬��ʮ����ʯ��ֱͨ���棬���¾�
��ˮ����ӿ�Ĵ��˺ӡ������������󣬺��о��ۺ���������¿�ȥ����
���ڸ߲�֮�ϣ������Ĳ����ѡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"road3",
  "northdown" : __DIR__"road5",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
