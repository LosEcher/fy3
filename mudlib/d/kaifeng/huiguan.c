// Room: /d/kaifeng/huiguan.c

inherit ROOM;

void create()
{
	set("short", "ɽ�¸ʻ��");
	set("long", @LONG
ɽ�¸ʻ����ɽ��������������ĸ��̾޼ֽ���ģ�������ͬ��ۻ�
�ĳ��������Ǹ������ص��˾ۻ�ġ���ȻҲ���ڴ���̸����ġ������
�ǹص���
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"eroad2",
  "east" : __DIR__"paifang",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
