// Room: /d/huashan/qingke.c

inherit ROOM;

void create()
{
	set("short", "���ƺ");
	set("long", @LONG
�߹���᫵�ʮ���̣��������ţ��͵������ƺ�����ƺ��һɽ�����
��������Ϊƽ̹�������￪ʼ����ɽ��·������ԭ�������ʯ�ס�ԶԶ��
��һ��ССʯͤ�����Ƕ���ͤ�ˡ��ഫ��̫���뻪�������������ڴˣ���
��ɽ��Ϊ��ע����̫�����ˣ��Ӵ˻�ɽ�ϵ����ؾͲ������Ǯ����
LONG
	);
	set("outdoors", "xx");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"shaluo",
  "eastup" : __DIR__"huixinshi",
]));

	setup();
	replace_program(ROOM);
}
