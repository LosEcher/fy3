// Room: /d/huanhua/houyuan.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
��®�ĺ�Ժ��һƬ�ϴ�ĳ���,��Ժ�������һ��յ�,ƽ�ǵ����Ƕ���
�˴�����,�յ������Ǹߴ�ĳ�����,һ��ʯ��·���ڿյر����ƹ�,ֱ����
ͨ����¥������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tingyu",
  "south" : __DIR__"neiting",
]));

	setup();
	replace_program(ROOM);
}
