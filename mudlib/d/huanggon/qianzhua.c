// Room: /d/huanggon/qianzhua.c

inherit ROOM;

void create()
{
	set("short", "Ҧ��Ǯׯ");
	set("long", @LONG
����һ�����ֺŵ�Ǯׯ�����м��������ʷ����ȫ�����ض��зֵꡣ
�����е���Ʊ�����ǳ��ã�ͨ��ȫ�����������ߵ�������κ�һ����
ׯ�ֵ궼���������ȡ��ǽ�Ϲ���һ������(paizi)��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yaodifei.c" : 1,
]));
	set("no_beg", 1);
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"echangan1",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "paizi" : "
��ׯ����Ϣ�����ٰٷ�֮һ��

      ��Ǯ        deposit����cun

      ȡǮ        withdraw����qu

      Ǯ�Ҷһ�    convert����duihuan

      ����        check����chazhang
",
]));

	setup();
	replace_program(ROOM);
}
