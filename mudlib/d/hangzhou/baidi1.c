// Room: /d/hangzhou/baidi1.c

inherit ROOM;

void create()
{
	set("short", "�׵�");
	set("long", @LONG
��֦���,�һ�ӭ��.Զ������,�̲����,ˮ��һɫ,��������.΢��
���ź����ˮ���������.�űߵĸ��ַ�������,ǧ�˰�̬.������֯.Զ
����ɽ��ӡ�ں�ˮ֮��,�����ƻ�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"bibo",
  "east" : __DIR__"duanqiao",
  "west" : __DIR__"baidi2",
]));

	setup();
	replace_program(ROOM);
}
