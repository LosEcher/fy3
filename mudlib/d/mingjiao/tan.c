
inherit ROOM;
void create()
{
        set("short", "��ˮ̶��");
        set("long", @LONG
    �������˱�ˮ̶�ϣ����ۿ�ȥ��̶ˮ������ɲ⡣վ��
    ̶��Ҳ�ܸе�һ����ĺ��⡣ң�뵱��������ϣ���ˮ̶�ϣ�
    ���˿�����绨������ʤѩ����֪�㵹�˶���Ӣ�ۺ��ܡ�
    ����������ʱ�֣�̫���߹������ͷ�����Ϸ���
LONG
        );

        set("exits", ([
                "east" : __DIR__"huayuan",
                ]));
set("objects",([
                 __DIR__"npc/daiqisi":1,
                 ]));
        setup();
        replace_program(ROOM);
}
