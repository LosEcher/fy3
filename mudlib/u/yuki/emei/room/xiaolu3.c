// Room: /u/yuki/emei/xiaolu3.c

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
������һ������������С·��ͨ���ü�ĺ�ɽ��·����
�ݴ�����·��ӿ����ݵģ�������ʮ�ּ��ѡ�·�ߵ��Ӳ���
ʱ��ʱ�ķ���һ����������������ú���������
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"banshanyao",
  "south" : __DIR__"xiaolu2",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
