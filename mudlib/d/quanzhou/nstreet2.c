// Room: /d/quanzhou/nstreet2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ȫ�ݳǵı���,��ΪȪ�ݿ���,������İ���������ϵ�����
�صĴ󺣸�,����Ȫ�ݳ��е����˸�ʰ����,��������ר�ŽӴ����˵���
��˾.�������˻�����.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"nstreet1",
  "south" : __DIR__"nstreet3",
  "west" : __DIR__"sibosi",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
