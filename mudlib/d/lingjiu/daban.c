// Room: /d/lingjiu/daban.c

inherit ROOM;

void create()
{
	set("short", "׺����");
	set("long", @LONG
�����ճ���ױ���ĵط�������һ�ź�ľ��ױ̨ �� �����������һ
������ͭ��(jingzi)����ױ̨��ɢ����һЩ��֬���ۡ�̨�԰��Ŷ����
һ����ɻ��ң�����������ˮ�������İ׾ա�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
//  "jingzi" : (: look_jingzi :),
]));
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"changl14",
]));

	setup();
	replace_program(ROOM);
}
