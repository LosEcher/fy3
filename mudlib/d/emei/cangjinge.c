// Room: /d/emei/cangjinge.c

inherit ROOM;

void create()
{
	set("short", "�ؾ�¥");
	set("long", @LONG
��¥��ɽ����,�Ӹ�����,��ȫ�µ���ߵ�,¥�в��и����Խ�������
���ղصĸ��ַ�ҵ伮,��������ǹ±�,ǧ������,��Ȼ,��Щ��������
�ز�ʾ��,Ѱ�����Ǽ�������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/daoming.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "southdown" : __DIR__"qifodian",
]));

	setup();
	replace_program(ROOM);
}
