// Room: /u/uuui/huayuan.c

inherit ROOM;

void create()
{
        set("short", "С��԰");
        set("long", @LONG
������������Ļʼһ�԰����԰Լռ����Ķ��̨ͤ
¥��޲����ɡ�ԶԶ����ȥ�ܿ���һ���˽�����ͤ����
���ص����ڲ�ͬ��һ����ˮ����԰���������ɫ�ʣ���
ˮ˳�ż�ɽ�뱱����ȥ����������԰�����˶�̬������
԰������һ��Χǽ������һ���ľ��ĸо�����԰������
���и�����С�š�
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"guandao",
  "northwest" : __DIR__"tingzi",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

