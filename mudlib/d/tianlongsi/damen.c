// Room: /d/tianlongsi/damen.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������������´���ǰ��ֻ�����ƻֺ�������������Ͽ���һ������
( duilian )�����Ḳ�֣����е㲦����֮�⡣̧ͷ�����������һ���
ľ���ң����⡰��ʥ�¡��������֣�������ɡ�������ʽ�������������
�Խй��ˣ�����֮Ϊ�������¡���
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  "/d/wudang/npc/guest" : 1,
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "duilian" : "
    ������Ⱦ����Բ�ɡ�������Ե�������

",
]));
	set("exits", ([ /* sizeof() == 2 */
	"north":__DIR__"dadao4",
  "south" : __DIR__"talin",
]));
	set("outdoors", "tianlongsi");

	setup();
	replace_program(ROOM);
}
