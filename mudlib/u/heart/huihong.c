// Room: /u/uuui/huihong.c

inherit ROOM;

void create()
{
        set("short", "�ֺ��");
        set("long", @LONG
��Ӱ����Ե���һ�����Ҷ��д�š��ֺ�
�����ִ����������������ĸ�Բ������յ���ơ����ɫ
���������Եü�Э������������ש����ĥ�Ĺ������ˡ�
���߹����������������ں�����������ս����������λ��
���а��Ϲ���һ����ܣ�������տ���Ҳ����˵��������
�Ȿ�������ʵ����͵��������ơ��˵�ÿ����ר�������
ɨ���ʶ��������ƣ����겻�ϡ�һ���������ڶ����
��������
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"guandao2",
  "east" : __DIR__"yishiting",
  "north" : __DIR__"huatuo",
  "south" : __DIR__"yingbi",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

