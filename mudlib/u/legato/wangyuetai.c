inherit ROOM;

void create()
{
      set("short","����̨");
      set("long",@LONG
����̨��ʵ����һ����ʯͷ����Ƕ�ڰ�ɽ�����㿴�˿����£�ƽ̹�⻬
������Ƕ��͵�ɽ�ڣ�ǰ�ߵĲ��ɴ�أ������дУ���ס���������
�����ַ���ɽ�ڣ�С���������ǰ���ţ�
LONG);
      set("outdoors", "xx");
      set("exits",([ /* sizeof() == 2 */
          "northup": __DIR__"xianrensong",
          "southdown": __DIR__"shanlu2"
        ]));
      setup();
}

