// Room: /d/heimuya/dating3.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���ǡ�������̡��µ������ã������õĴ�����ʮ�����ɣ�
�ֻ���һ������ʱ��ʱ�֡���������һ����(bian)��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qinglongdizi.c" : 2,
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "bian" : "����д����������գ��������졣ǧ�����أ�һͳ���� ��
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"guang",
  "south" : __DIR__"chlang1",
]));

	setup();
	replace_program(ROOM);
}
