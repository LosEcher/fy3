// thd:np.c

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
������������һ��Ƭ�ޱߵ��������С������ܵ����ӻ�ֻ�ϸ����
�����̬���죬���������µ������š�����������ţ�ֻ���������Ҷ��
ɳɳ���������ڴ��㲻�ɵľ���������һ�����������������Ҳֻ����
�������������˽���������������������������⣬����һЩС����
С���ˣ����ǿ��������ۣ�ȷɢ���ŵ�����ҩ�㡣���������Ͼ��ǻ���ͤ
�ˡ�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "obj/flower3" :  2,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 4 */
          "south" : __DIR__"green_pavilion",
          "north" : __DIR__"forest_road1",
          "southeast" : __DIR__"nep",
          "southwest" : __DIR__"nwp",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

