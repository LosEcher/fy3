// Room: /u/uuui/xuedao/xuedao53.c

inherit ROOM;

void create()
{
	set("short", "��ʯ��");
	set("long", @LONG
�������͵Ĳ�ƺ�У����һ��ʯ��·��·�϶�����
ɫ�ľ�ʯ�̳ɵ�̨�ף���ϸ��ȥ����Ȼÿ��̨�׶���һ
������ʯ�̳ɡ�̨����������Щ���ݣ������������ӡ
�ѵ������ָ����������µĺۼ���������ȥ������һ��
�����ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"xuedao52",
  "south" : __DIR__"xuedao54",
  "east" : __DIR__"xuedao56",
  "west" : __DIR__"xuedao57",
]));

	setup();
	replace_program(ROOM);
}
