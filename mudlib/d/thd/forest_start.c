// thd:forest_start.c

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
������һ��Ƭ�����֡�����ǰ��һ��Ƭ���̣���������ô����������
ô����ʵ�������˲�����������Ƭ�̿���������Ƭ�콻���ӳ��Ӫ���
��һ���˼��ɾ�����Ľ�����������С·������������ţ�����������
�ŵ������ķ��㡣
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northwest" : __DIR__"sroad",
          "south" : __DIR__"forest_road1",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

