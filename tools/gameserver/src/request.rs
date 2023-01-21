use tokio::sync::{broadcast, oneshot};

use crate::event::Event;
use crate::room_protocol::{room_request, RoomEvent};
use crate::server::ClientKey;

/// Internal data type used for communication between
/// [`crate::Client`]s and the [`crate::Server`].
#[derive(Debug)]
pub enum Request {
    Join {
        inner: room_request::Join,
        tx: oneshot::Sender<JoinResponse>,
    },
}

#[derive(Debug)]
pub struct JoinResponse {
    pub rx: broadcast::Receiver<Event>,
    pub client_key: ClientKey,
    pub events: Vec<RoomEvent>,
}
