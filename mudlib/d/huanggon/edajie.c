// Room: /d/huanggon/edajie.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������������Ľֵ�,���������찲�Ź㳡.�ֵ�������������,ߺ��
������,��Ϊ�Ǿ���,�ΰ��ܺ�,����������ͦ��.���������д����������
��,���ǰ����ӵ�,��ٺ»���˼�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"jiaoqiying",
  "west" : __DIR__"guangchang",
  "east" : __DIR__"edajie1",
]));

	setup();
	replace_program(ROOM);
}
