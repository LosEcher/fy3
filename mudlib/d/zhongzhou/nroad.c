// Room: /d/zhongzhou/nroad.c

inherit ROOM;

void create()
{
	set("short", "ʯ����");
	set("long", @LONG
������и���Զ��·�������������ϣ����üͷҲ��չ�˿���������Ҳ
Խ��Խ�󡣱�����ǡ����ݸ�����������ͨ�����ݡ����ݡ��䵱�ȸ��ء�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"toyy",
  "north" : __DIR__"nanmeng",
]));
set("outdoors","/d/zhongzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
