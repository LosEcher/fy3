// Room: /d/huanggon/yuhuayuan1.c

inherit ROOM;

void create()
{
	set("short", "����԰");
	set("long", @LONG
С����ˮ,���Ȼ���,��ɽ��΢������,һЩǣ�ٹ�ݲ�������̵�Ҷ��
�Ӽ�ɽ�ϴ�����,��������Ķ����ڼ�ɽ�д���.ɽ��Ե��ˮ,���Ǵ�ɽ��
й�����µ��ٲ���۶���.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"bukufang",
  "east" : __DIR__"lianxishi",
  "west" : __DIR__"qianqinmen",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
