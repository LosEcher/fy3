// Room: /u/yuki/emei/xiaolu2.c

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
  "north" : __DIR__"xiaolu3",
  "southwest" : __DIR__"xiaolu1",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
