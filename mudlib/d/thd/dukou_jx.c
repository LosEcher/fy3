// thd:dukou_jx.c

inherit ROOM;

void go_back();

void create()
{
      set("short", "��ͷ");
	set("long", @LONG
���Ǹ���С����ͷ������ͣ��Ҳ������洬�������������õģ�����
ֻ��һ�Ҵ�������С�����ܾ��ơ�������ƣ��������ϣ��϶���������֮
�֡�������˵�����е����һ������Ҵ�˵���þͺ��һ����йء�������
ͷ��ûʲô�ˣ�ֻ��һ���ư����й䡣
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/chuanfu2" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
		"west" : "/d/jiaxing/luwei"
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

