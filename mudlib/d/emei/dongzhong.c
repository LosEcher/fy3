// Room: /d/room/dongzhong.c

inherit ROOM;

void create()
{
	set("short", "�����ɸ�");
	set("long", @LONG
�����ɸ���������һֱ�Ǹ����صĵط�,��˵��ԯ�Ƶ۷õ��ڶ�üɽ
�ڴ˼�һ������ü�԰�,�㾪�����'������һ��ô?'��'���ϾӴ�',����
����˶���,�ڶ��ߵ�ʯ������һ������(lian).
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "lian" : "�ʾ��Ϻδ�����,һƬ������Ӱ��.
������ң����ȥ,��ɽ���´˼��
         -----�Ĵ�������
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"qiandong.c",
  "out" : __DIR__"dongwai.c",
]));

	setup();
	replace_program(ROOM);
}
