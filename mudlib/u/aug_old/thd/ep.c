// thd:ep.c

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
������������һ��Ƭ�ޱߵ��������С������ܵ����ӻ�ֻ�ϸ����
�����̬���죬���������µ������š�����������ţ�ֻ���������Ҷ��
ɳɳ���������ڴ��㲻�ɵľ���������һ�����������������Ҳֻ����
�������������˽���������������������������⣬����һЩС����
С���ˣ����ǿ��������ۣ�ȷɢ���ŵ�����ҩ�㡣�������������ǻ���ͤ
�ˡ�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "obj/flower5" :  2,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "west" : __DIR__"green_pavilion",          
          "northwest" : __DIR__"nep",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

