// Room: /d/jinling/huayuan.c

inherit ROOM;

void create()
{
	set("short", "���ƻ�԰");
	set("long", @LONG
��Ȼ����ǰһ�ϣ�ֻ��һ��С¥��������һƬ��ɫ���Ʋ��ϡ�����һ����
ԭ��С¥���������˵���ɫ�Ļ���(flower)��΢�紵������Ʈ�����Ʋʡ�����¥
��Ȼ�����鴫��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"xiaolu.c",
  "west" : __DIR__"ziyunlou.c",
]));
	set("outdoors", "/d/jingling");
	set("no_magic", 1);
	set("item_desc", ([ /* sizeof() == 1 */
  "flower" : "�������Դ���������ֲ軨�����С���������������������������ʱ��

�����������ɫ���⣬Ӧ�˵�����",
]));
	set("light_up", 1);
	set("no_fight", 1);

	setup();
	replace_program(ROOM);
}
