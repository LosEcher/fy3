// Room: /d/dali/road5.c

inherit ROOM;

void create()
{
	set("short", "����·");
	set("long", @LONG
�����Ǵ����ڣ�������һ��������·�ϣ����˶��Ǳ��صİ�
�����ˡ�Ҳ�����Щ��ԭ���������߶�����·����ͨ��ٵ�����
������·ͨ������ǵ����ţ����пɴ�㶫��ɽ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"shuangheqiao",
]));
	set("outdoors", "dali");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yetu" : 2,
]));

	setup();
	replace_program(ROOM);
}
