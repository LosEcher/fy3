// Room: /d/kaifeng/xiaoyuan.c

inherit ROOM;

void create()
{
	set("short", "СԺ");
	set("long", @LONG
��һ��̤���������ɵú��������á���ֻ������һƬ�����������÷�
�����������������������С·����������䣬����·�ľ�ͷ���Ƿ���
��ʦ����ס����Ҳ����ƽ���Ӵ���͵ĵط���
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"fangzhang",
  "west" : __DIR__"cangjing",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
